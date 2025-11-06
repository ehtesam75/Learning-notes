const searchBox = document.getElementById('search-box');
const difficultyFilter = document.getElementById('difficulty-filter');
const sortSelect = document.getElementById('sort-select');
const problemsList = document.getElementById('problems-list');

let problems = Array.from(document.querySelectorAll('.problem-row'));

searchBox.addEventListener('input', filterProblems);
difficultyFilter.addEventListener('change', filterProblems);
sortSelect.addEventListener('change', sortProblems);

function filterProblems() {
    let searchTerm = searchBox.value.toLowerCase();
    let difficulty = difficultyFilter.value;

    problems.forEach(row => {
        let title = row.dataset.title.toLowerCase();
        let rowDifficulty = row.dataset.difficulty;
        
        let showRow = true;
        
        if (searchTerm && !title.includes(searchTerm)) {
            showRow = false;
        }
        
        if (difficulty !== 'all' && rowDifficulty !== difficulty) {
            showRow = false;
        }
        
        if (showRow) {
            row.classList.remove('hidden');
        } else {
            row.classList.add('hidden');
        }
    });
}

function sortProblems() {
    let sortBy = sortSelect.value;
    
    problems.sort((a, b) => {
        if (sortBy === 'name') {
            return a.dataset.title.localeCompare(b.dataset.title);
        }
        
        if (sortBy === 'difficulty') {
            let order = { 'Easy': 1, 'Medium': 2, 'Hard': 3 };
            return order[a.dataset.difficulty] - order[b.dataset.difficulty];
        }
        
        if (sortBy === 'solved') {
            let aChecked = a.dataset.solved === 'true' ? 0 : 1;
            let bChecked = b.dataset.solved === 'true' ? 0 : 1;
            return aChecked - bChecked;
        }
    });

    problems.forEach(row => problemsList.appendChild(row));
    filterProblems();
}
