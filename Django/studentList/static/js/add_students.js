document.getElementById('addStudentForm').addEventListener('submit', function(event) {
	const confirmSubmit = confirm("Are you sure you want to add this student?");
	if (!confirmSubmit) {
		event.preventDefault();
	}
}); 