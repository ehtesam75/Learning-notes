// Simple highlight effect on table rows
document.addEventListener('DOMContentLoaded', () => {
	const rows = document.querySelectorAll('#studentTable tbody tr');

	rows.forEach((row) => {
		row.addEventListener('click', () => {
			rows.forEach((r) => r.classList.remove('selected'));
			row.classList.add('selected');
			alert(`You selected: ${row.cells[1].innerText}`);
		});
	});
});